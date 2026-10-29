@interface TXCScreenCaptureSourceInfo : NSObject
{
    BOOL _sharesScreen; // +0x8
    long long _sourceId; // +0x10
    NSDictionary * _extInfo; // +0x18
}
- (BOOL)sharesScreen;
- (void)setSharesScreen:(BOOL)arg1;
- (long long)sourceId;
- (void)setSourceId:(long long)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

