@interface MMLocatingCoordinateCommonParams : NSObject
{
    unsigned long long _scene; // +0x8
    unsigned long long _languageScene; // +0x10
    long long _type; // +0x18
    QIndoorInfo * _indoorInfo; // +0x20
    id _requestObj; // +0x28
}
- (id)init;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)languageScene;
- (void)setLanguageScene:(unsigned long long)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)indoorInfo;
- (void)setIndoorInfo:(id)arg1;
- (id)requestObj;
- (void)setRequestObj:(id)arg1;
- (void).cxx_destruct;
@end
