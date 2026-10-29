@interface WCFinderAdsSteamRequestParams : NSObject
{
    int _enterScene; // +0x8
    NSString * _refTid; // +0x10
    unsigned long long _showPos; // +0x18
    NSString * _bypData; // +0x20
}
- (id)refTid;
- (void)setRefTid:(id)arg1;
- (unsigned long long)showPos;
- (void)setShowPos:(unsigned long long)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (id)bypData;
- (void)setBypData:(id)arg1;
- (void).cxx_destruct;
@end
