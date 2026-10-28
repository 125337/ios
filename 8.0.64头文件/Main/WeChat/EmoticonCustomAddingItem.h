@interface EmoticonCustomAddingItem : NSObject
{
    BOOL _needReportEditInfo; // +0x8
    BOOL _allowsUploadWhenExceedLimit; // +0x9
    unsigned long long _addSource; // +0x10
    NSArray * _imgDatas; // +0x18
    EmotionFinderLinkInfo * _finderSourceInfo; // +0x20
    NSString * _editSessionIdForReport; // +0x28
    NSMutableArray * _editEmoticonWordings; // +0x30
    unsigned long long _addWay; // +0x38
    unsigned long long _addUI; // +0x40
}
+ (id)createItemFromTask:(id)arg1;
- (id)init;
- (unsigned long long)addSource;
- (void)setAddSource:(unsigned long long)arg1;
- (id)imgDatas;
- (void)setImgDatas:(id)arg1;
- (id)finderSourceInfo;
- (void)setFinderSourceInfo:(id)arg1;
- (id)editSessionIdForReport;
- (void)setEditSessionIdForReport:(id)arg1;
- (BOOL)needReportEditInfo;
- (void)setNeedReportEditInfo:(BOOL)arg1;
- (id)editEmoticonWordings;
- (void)setEditEmoticonWordings:(id)arg1;
- (unsigned long long)addWay;
- (void)setAddWay:(unsigned long long)arg1;
- (unsigned long long)addUI;
- (void)setAddUI:(unsigned long long)arg1;
- (BOOL)allowsUploadWhenExceedLimit;
- (void)setAllowsUploadWhenExceedLimit:(BOOL)arg1;
- (void).cxx_destruct;
@end
