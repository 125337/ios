@interface WCFinderFeedStickerAdParam : NSObject
{
    BOOL _continueFlag; // +0x8
    NSArray * _dataArray; // +0x10
    NSData * _lastBuffer; // +0x18
    NSDictionary * _reportDict; // +0x20
    WCFinderFeedStickerAdMeta * _meta; // +0x28
    WCFinderFeedStickerAdViewModel * _adViewModel; // +0x30
}
- (id)initWithAdMeta:(id)arg1 contentVM:(id)arg2;
- (id)dataArray;
- (void)setDataArray:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)reportDict;
- (void)setReportDict:(id)arg1;
- (id)meta;
- (void)setMeta:(id)arg1;
- (id)adViewModel;
- (void)setAdViewModel:(id)arg1;
- (void).cxx_destruct;
@end
