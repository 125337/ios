@interface WCMomentsErrTipsViewModel : NSObject
{
    BOOL _isCustomTipsForComment; // +0x8
    BOOL _isSecurityVerified; // +0x9
    BOOL _isDetail; // +0xa
    NSString * _errTips; // +0x10
    NSString * _customTips; // +0x18
    unsigned long long _uploadErrType; // +0x20
    WCDataItem * _dataItem; // +0x28
    WCCommentItem * _comment; // +0x30
    long long _tipType; // +0x38
}
- (id)initWithDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1 comment:(id)arg2 tipType:(long long)arg3 isDetail:(BOOL)arg4;
- (void)updateWithDataItem:(id)arg1 comment:(id)arg2;
- (void)configTips;
- (id)genErrTipsForDetail;
- (id)genCustomTipsForDetail;
- (BOOL)isTipsForFold;
- (id)errTipsAccessibilityText;
- (id)errTips;
- (id)customTips;
- (BOOL)isCustomTipsForComment;
- (unsigned long long)uploadErrType;
- (BOOL)isSecurityVerified;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (long long)tipType;
- (void)setTipType:(long long)arg1;
- (BOOL)isDetail;
- (void)setIsDetail:(BOOL)arg1;
- (void).cxx_destruct;
@end

