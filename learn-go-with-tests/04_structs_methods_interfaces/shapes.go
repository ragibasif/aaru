package shapes

type Rectangle struct {
	Width  float64
	Height float64
}

type Shape interface {
	Area() float64
}

func Perimeter(width float64, height float64) float64 {
	return 2 * (height + width)
}

func Area(width float64, height float64) float64 {
	return width * height
}
