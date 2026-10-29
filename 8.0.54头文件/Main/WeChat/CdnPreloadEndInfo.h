@interface CdnPreloadEndInfo : NSObject
{
    int _retCode; // +0x8
    CdnProgressInfo * _progressInfo; // +0x10
}
- (id)initWithRetCode:(int)arg1 progressInfo:(id)arg2;
- (int)retCode;
- (void)setRetCode:(int)arg1;
- (id)progressInfo;
- (void)setProgressInfo:(id)arg1;
- (void).cxx_destruct;
@end

