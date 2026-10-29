@interface QMapStyleData : NSObject
{
    BOOL _mapStyleEnabled; // +0x8
    NSArray * _styleList; // +0x10
}
- (id)initWithJSON:(id)arg1;
- (BOOL)mapStyleEnabled;
- (id)styleList;
- (void).cxx_destruct;
@end

