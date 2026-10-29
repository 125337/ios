@interface BrandDetailNotificationCellViewModel : BrandNotificationCellViewModel <contactVerifyLogicDelegate>
{
    NSMutableArray * m_messageTextArr; // +0x8
    CContact * m_brandContact; // +0x10
    CContactVerifyLogic * m_oLogic; // +0x18
    NSAttributedString * _attrTitle; // +0x20
    long long _maxTitleLines; // +0x28
    double _titleHeight; // +0x30
    NSAttributedString * _attrDetail; // +0x38
    long long _maxDetailLines; // +0x40
    double _detailHeight; // +0x48
    long long _followStatus; // +0x50
    NSArray * _tagsList; // +0x58
    id /* block */ _onFollowAction; // +0x60
}
+ (BOOL)canCreateViewModelWithMsgWrap:(id)arg1;
- (id)initWithMessage:(id)arg1 viewWidth:(double)arg2;
- (void)setMessageWrap:(id)arg1;
- (void)setViewWidth:(double)arg1;
- (id)cellViewClassName;
- (void)updateBrandContact;
- (double)viewHeight;
- (void)onDarkModeStatusChanged;
- (long long)followStatus;
- (void)setFollowStatus:(long long)arg1;
- (void)startFollow;
- (void)onContactVerifyFail;
- (void)contactAddContactOk:(id)arg1;
- (void)resetFollowStatus:(BOOL)arg1;
- (void)reloadData;
- (id)brandContact;
- (id)notifyMsg;
- (id)headUrl;
- (double)headCornerRadius;
- (id)nickname;
- (id)userName;
- (BOOL)showFollowButton;
- (BOOL)isNotFollow;
- (id)__attrStringByContentList:(id)arg1;
- (id)accessibilityLabel;
- (id)date;
- (id)dateColor;
- (id)attrTitle;
- (long long)maxTitleLines;
- (double)titleHeight;
- (id)attrDetail;
- (long long)maxDetailLines;
- (double)detailHeight;
- (id)tagsList;
- (id /* block */)onFollowAction;
- (void)setOnFollowAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

