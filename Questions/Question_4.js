const monthlyData = {
    SP: 67836.43,
    RJ: 36678.66,
    MG: 29229.88,
    ES: 27165.48,
    Outros: 19849.53,
};
const monthlyPercents = {};

// to use the values of the object as an array
const monthlyValue = Object.values(monthlyData).reduce((total, valor) => total + valor
);



for (const state in monthlyData) {
    const percent = (monthlyData[state] / monthlyValue) * 100; 
    monthlyPercents[state] = percent.toFixed(2);
}

console.log("Percentual de representação por estado:");
for (const state in monthlyPercents) {
    console.log(`${state}: ${monthlyPercents[state]}%`);
}