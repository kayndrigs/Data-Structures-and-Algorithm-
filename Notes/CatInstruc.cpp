/**Variable that we will use:

1. Integers
cat = number of categories.
rate = passing rate

2. Float - array
score = as is
-> w/ one-dimensional array
total = as is
-> w/ one-dimensional array

percent = percentage of the score and total
-> percent = (score/total)*100
-> w/ one-dimensional array

3. String - array
ass = assesment to display whether a category passed or not
w/ one-dimensional array

4. Bool
pass = whether the examinee pass that category or not
-> w/ on e-dimensional array
verdict = will always be true. Will be used for proposition comparison
to determine the final standing. 

 * /


/*Sample Dialog
_____________________________
# of Categories: 5 
Passing Rate(%): 60

Cat 1 (Score, Total): 20 25
Cat 2 (Score, Total): 10 25
Cat 3 (Score, Total): 15 30
Cat 4 (Score, Total): 20 25
Cat 5 (Score, Total): 25 30

Exam Performance:
Cat 1: 80%
Cat 2: 67%
Cat 3: 50%
Cat 4: 80%
Cat 5: 83%

Verdict: FAILED

Assessment:
Cat 1: Passed
Cat 2: Failed
Cat 3: Failed
Cat 4: Passed
Cat 5: Passed


    3. Decimal point and figure control
        - use iomanip
        *for adjusting the decimal places only
            - setprecision(10) 

        *for adjusting the figures (significant figures)
        cout.unsetf (ios::fixed); 
        cout<<setprecision(10)<<...
_____________________________*/

/**/ 