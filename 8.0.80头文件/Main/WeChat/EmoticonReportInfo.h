@interface EmoticonReportInfo : NSObject
{
    BOOL _fromLocal; // +0x8
    BOOL _loadSuccessfully; // +0x9
    int _index; // +0xc
    NSString * _md5; // +0x10
    unsigned long long _finishLoadingTime; // +0x18
}
- (id)init;
- (int)index;
- (void)setIndex:(int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned long long)finishLoadingTime;
- (void)setFinishLoadingTime:(unsigned long long)arg1;
- (BOOL)fromLocal;
- (void)setFromLocal:(BOOL)arg1;
- (BOOL)loadSuccessfully;
- (void)setLoadSuccessfully:(BOOL)arg1;
- (void).cxx_destruct;
@end
