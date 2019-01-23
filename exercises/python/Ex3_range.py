import sys

class Error(Exception):
   """Base class for other exceptions"""
   pass

class TooManyValuesError(Error):
   """Raised when the input value is too small"""
   pass

class TooFewValuesError(Error):
   """Raised when the input value is too large"""
   pass

class MyRange:
    def __init__(self,lista_entr):
        try:
            if (len(lista_entr)>3):
                raise TooManyValuesError
            if(len(lista_entr)==0):
                raise TooFewValuesError
            if(len(lista_entr)==2):
                self._start=lista_entr[0]
                self._end=lista_entr[1]
                self._step=1
            if(len(lista_entr)==3):
                self._start=lista_entr[0]
                self._end=lista_entr[1]
                self._step=lista_entr[2]
            if(len(lista_entr)==1):
                self._start=lista_entr[0]
                self._end=self._start+1
                self._step=1
        except TooManyValuesError:
            print("too many values: 3 at most")
        except TooFewValuesError:
            print("too few values: 1 at least")
        
    def myrange(self):    
        lista_out=[]
        lista_out.append(self._start)
        i=self._start
        while i<self._end-1:
            i+=1*self._step
            lista_out.append(i)
            
        return lista_out


import unittest
class TestRange(unittest.TestCase):
    def test_unitary_list(self):
        lista1=[10]
        m=MyRange(lista1)
        self.assertEqual(1,len(m.myrange()))
    def test_two_args_list(self):
        lista1=[1,10]
        m1=MyRange(lista1)
        self.assertEqual(9,len(m1.myrange()))
    def test_two_args_list(self):
        lista1=[1,12,2]
        m2=MyRange(lista1)
        self.assertEqual(6,len(m2.myrange()))    
        
if __name__ == '__main__':
    unittest.main()
