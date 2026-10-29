@interface QIndoorMapData : NSObject
{
    BOOL _indoorMapEnabled; // +0x8
    long long _keyType; // +0x10
    NSArray * _buildingList; // +0x18
}
- (id)initWithJSON:(id)arg1;
- (id)toJSON;
- (BOOL)indoorMapEnabled;
- (long long)keyType;
- (id)buildingList;
- (void).cxx_destruct;
@end

