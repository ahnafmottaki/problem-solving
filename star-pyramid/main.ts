function createStarPyramid(height: number) {
  let output = "";
  const width = height + (height - 1);
  for (let i = 0; i < height; ++i) {
    for (let j = 1; j <= width; ++j) {
      if (j < height - i || j > height + i) {
        output += " ";
      } else {
        output += "*";
      }
    }
    output += "\n";
  }
  return output;
}

console.log(createStarPyramid(100));
