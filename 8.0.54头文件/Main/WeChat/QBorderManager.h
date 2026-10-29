@interface QBorderManager : NSObject
{
    int _version; // +0x8
    NSMutableDictionary * _borderDict; // +0x10
    QBorder * _inlandBorder; // +0x18
    QBorder * _chinaBorder; // +0x20
    QBorder * _dataSafetyInlandBorder; // +0x28
}
+ (id)instance;
- (BOOL)shouldCorrectCoordinateToGCJ02:(CLLocationCoordinate2D)arg1;
- (BOOL)chinaContainsMapRect:(struct)arg1;
- (BOOL)chinaContainsCoordinate:(CLLocationCoordinate2D)arg1;
- (BOOL)dataSafetyInlandContainsCoordinate:(CLLocationCoordinate2D)arg1;
- (BOOL)checkMapStatus:(id)arg1 withLogoSource:(id)arg2;
- (BOOL)containsCoordinate:(CLLocationCoordinate2D)arg1 in:(id)arg2;
- (BOOL)containsMapRect:(struct)arg1 in:(id)arg2;
- (id)getFrontierFilePath;
- (id)readLocalFrontierFile;
- (void)downloadNewFrontierData:(id)arg1;
- (BOOL)updateFrontierData:(id)arg1;
- (id)init;
- (void)setupSelf;
- (void)setupSelfWithFrontierDict:(id)arg1;
- (void)setupBorders;
- (int)version;
- (void)setVersion:(int)arg1;
- (id)borderDict;
- (void)setBorderDict:(id)arg1;
- (id)inlandBorder;
- (void)setInlandBorder:(id)arg1;
- (id)chinaBorder;
- (void)setChinaBorder:(id)arg1;
- (id)dataSafetyInlandBorder;
- (void)setDataSafetyInlandBorder:(id)arg1;
- (void).cxx_destruct;
@end

