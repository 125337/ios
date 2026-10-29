@interface PBCGIHelperOCWrap : NSObject
{
    PBCGIHelperWrap * _pCgi; // +0x8
}
+ (id)createInstance:(PBCGIHelperWrap)arg1;
- (void)dealloc;
- (PBCGIHelperWrap *)pCgi;
- (void)setPCgi:(PBCGIHelperWrap *)arg1;
@end

