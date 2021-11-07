
array = []

INIT: prev = array[0]
INIT: counter = 0

   for num in array:
        if num is prev:
            ADD: counter += 1
        else:
            INIT: counter = 1
        if counter is 5:
            return True

        UPDATE: prev = num

    return False


FUNCTION: isLengthValid(array)
    return 13 <=len(array)<=16

FUNCTION: getSumForValidation()
   INIT: ret = 0
    for num in ReversedArray:
        if index(num) is odd(1-index):
            ret += quotient(num, 10) + remainder(num,10)
        else:
            ret += num
    return ret


FUNCTION: isCardValid(sum: getSumForValidation)
    if remainder(sum, 10) is 0:
        return True
    else:
        return False


FUNCIONT: MAIN()
   array = input()

    sum = getSumForValidation(array)

    if(isCardValid(sum)):
        print("This card is valid")
    else:
        print("This is NOT valid")
