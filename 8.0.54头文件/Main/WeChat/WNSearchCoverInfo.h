@interface WNSearchCoverInfo : NSObject
{
    UIColor * _coverColor; // +0x8
    NSArray * _subCoverInfoList; // +0x10
    CGRect _beginRect; // +0x18
    CGRect _endRect; // +0x38
}
- (id)init;
- (CGRect)beginRect;
- (void)setBeginRect:(CGRect)arg1;
- (CGRect)endRect;
- (void)setEndRect:(CGRect)arg1;
- (id)coverColor;
- (void)setCoverColor:(id)arg1;
- (id)subCoverInfoList;
- (void)setSubCoverInfoList:(id)arg1;
- (void).cxx_destruct;
@end

