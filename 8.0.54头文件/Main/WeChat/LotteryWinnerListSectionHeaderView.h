@interface LotteryWinnerListSectionHeaderView : UIView
{
    BOOL _showDownLoad; // +0x8
    unsigned int _isUrlExpired; // +0xc
    NSString * _recordUrl; // +0x10
    id /* block */ _downLoadBlock; // +0x18
    id /* block */ _timeOutBlock; // +0x20
    MMUILabel * _winTipLabel; // +0x28
    MMUIButton * _downLoadButton; // +0x30
    MMUIButton * _timeOutButton; // +0x38
}
+ (double)headerHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTimeOutButton;
- (void)layoutDownLoadButton;
- (void)timeOutClick;
- (void)downLoadClick;
- (void)layoutWinTipLabel;
- (id)recordUrl;
- (void)setRecordUrl:(id)arg1;
- (BOOL)showDownLoad;
- (void)setShowDownLoad:(BOOL)arg1;
- (unsigned int)isUrlExpired;
- (void)setIsUrlExpired:(unsigned int)arg1;
- (id /* block */)downLoadBlock;
- (void)setDownLoadBlock:(id /* block */)arg1;
- (id /* block */)timeOutBlock;
- (void)setTimeOutBlock:(id /* block */)arg1;
- (id)winTipLabel;
- (void)setWinTipLabel:(id)arg1;
- (id)downLoadButton;
- (void)setDownLoadButton:(id)arg1;
- (id)timeOutButton;
- (void)setTimeOutButton:(id)arg1;
- (void).cxx_destruct;
@end

