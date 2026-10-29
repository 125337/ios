@interface WCTogetherHistoryOperation : NSObject
{
    BOOL _didDisplayInHistory; // +0x8
    BOOL _didDisplayInPreview; // +0x9
    BOOL _didDisplayInDetail; // +0xa
    BOOL _didLike; // +0xb
    BOOL _didComment; // +0xc
    WCDataItem * _dataItem; // +0x10
    long long _operatedType; // +0x18
    double _detailBrowsingAccumulatedTime; // +0x20
}
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)didDisplayInHistory;
- (void)setDidDisplayInHistory:(BOOL)arg1;
- (BOOL)didDisplayInPreview;
- (void)setDidDisplayInPreview:(BOOL)arg1;
- (BOOL)didDisplayInDetail;
- (void)setDidDisplayInDetail:(BOOL)arg1;
- (BOOL)didLike;
- (void)setDidLike:(BOOL)arg1;
- (BOOL)didComment;
- (void)setDidComment:(BOOL)arg1;
- (long long)operatedType;
- (void)setOperatedType:(long long)arg1;
- (double)detailBrowsingAccumulatedTime;
- (void)setDetailBrowsingAccumulatedTime:(double)arg1;
- (void).cxx_destruct;
@end

