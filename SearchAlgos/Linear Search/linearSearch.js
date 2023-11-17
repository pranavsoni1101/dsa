const searchAlgo = (arr, len, num) => {
    for(let i = 0; i < len; i++){
        if(arr[i] === num){
            return i;
        }
    }
    // This is a check to avoid any errors 
    // if the number is not present in the array
    return -1;
}

const arr = [12, 30, 22, 40, 87, 65];
const num = 87;

const result = searchAlgo(arr, arr.length, num);

(result !== -1)?
    console.log(`${num} found at index ${result}`)
    :
    console.log("Number not found in array");