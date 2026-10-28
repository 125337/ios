@interface MMAlbumAuthorizationReportObject : NSObject
{
    BOOL _clickSetting; // +0x8
    BOOL _clickChoosePart; // +0x9
    BOOL _clickBanner; // +0xa
    BOOL _clickAddPhoto; // +0xb
    int _scene; // +0xc
    unsigned int _exception; // +0x10
    long long _addPhotoCount; // +0x18
}
+ (unsigned int)getAuthorizationStatus;
+ (void)reportiOS14OnceIfNeeded;
- (void)report;
- (int)scene;
- (void)setScene:(int)arg1;
- (BOOL)clickSetting;
- (void)setClickSetting:(BOOL)arg1;
- (BOOL)clickChoosePart;
- (void)setClickChoosePart:(BOOL)arg1;
- (BOOL)clickBanner;
- (void)setClickBanner:(BOOL)arg1;
- (BOOL)clickAddPhoto;
- (void)setClickAddPhoto:(BOOL)arg1;
- (long long)addPhotoCount;
- (void)setAddPhotoCount:(long long)arg1;
- (unsigned int)exception;
- (void)setException:(unsigned int)arg1;
@end
