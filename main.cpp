#include <iostream>

int main() {
	
	const int IMAGE_WIDTH = 256;
	const int IMAGE_HEIGHT = 256;

	std::cout << "P3\n" << IMAGE_WIDTH << " " << IMAGE_HEIGHT << "\n255\n";


	for (int vPixels = IMAGE_HEIGHT - 1; vPixels >= 0; vPixels--) {
		std::cerr << "\rScanlines Remaining: " << vPixels << " " << std::flush;
		for (int hPixels = 0; hPixels < IMAGE_WIDTH; hPixels++) {
			auto r = double(hPixels) / (IMAGE_WIDTH - 1);
			auto g = double(vPixels) / (IMAGE_HEIGHT - 1);
			auto b = 0.25;

			int ir = static_cast<int>(255.999 * r);
			int ig = static_cast<int>(255.999 * g);
			int ib = static_cast<int>(255.999 * b);

			std::cout << ir << ' ' << ig << ' ' << ib << '\n';


		}
	}

}