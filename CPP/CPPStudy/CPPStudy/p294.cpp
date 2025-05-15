//#include <iostream>
//
//using namespace std;
//
//class Car
//{
//private:
//	int gasolineGauge;
//public:
//	Car(int gauge)
//		: gasolineGauge(gauge)
//	{
//
//	}
//	int GetGasGauge()
//	{
//		return gasolineGauge;
//	}
//};
//
//class HybridCar : public Car
//{
//private:
//	int electricGague;
//
//public:
//	HybridCar(int gasGauge, int elecGauge)
//		: Car(gasGauge), electricGague(elecGauge)
//	{
//
//	}
//
//	int GetElecGauge()
//	{
//		return electricGague;
//	}
//};
//
//class HybridWaterCar : public HybridCar
//{
//private:
//	int waterGauge;
//public:
//	HybridWaterCar(int gasGauge, int elecGauge, int waterGauge)
//		:HybridCar(gasGauge, elecGauge), waterGauge(waterGauge)
//	{
//
//	}
//
//	void ShowCurrentGauge()
//	{
//		cout << GetGasGauge() << endl;
//		cout << GetElecGauge() << endl;
//		cout << waterGauge << endl;
//
//	}
//};
//
//
//int main(void)
//{
//	/*HybridWaterCar hwc(1, 2, 3);
//	hwc.ShowCurrentGauge();*/
//
//	unique_ptr<HybridWaterCar> hwcp = make_unique<HybridWaterCar>(1, 2, 3);
//	hwcp->ShowCurrentGauge();
//
//}