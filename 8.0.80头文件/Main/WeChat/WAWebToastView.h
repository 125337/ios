@interface WAWebToastView : UIView
{
    UIView * _bkgView; // +0x8
    UIImageView * _tipIconView; // +0x10
    MMUILabel * _label; // +0x18
    SightIconView * _loadingIndicator; // +0x20
    BOOL _isLoading; // +0x28
    BOOL _isMask; // +0x29
    long long _seqID; // +0x30
    id <WAWebToastViewDelegate> _delegate; // +0x38
    long long _dialogId; // +0x40
    NSString * _tips; // +0x48
    UIImage * _icon; // +0x50
    double _fShowDuration; // +0x58
}
+ (void)setCurrentToastView:(id)arg1;
+ (id)getCurrentToastViewIfHave;
+ (long long)genSeqId;
+ (id)addToastInView:(id)arg1;
+ (id)showToast:(id)arg1 andText:(id)arg2 duration:(double)arg3 inView:(id)arg4;
+ (id)showLoading:(id)arg1 duration:(double)arg2 inView:(id)arg3;
+ (id)tryCreateNewToastInView:(id)arg1;
+ (void)hideToast:(id /* block */)arg1;
+ (void)removeToast;
+ (void)removeToastInView:(id)arg1;
+ (void)adjustPosition:(id)arg1;
+ (void)bringToastToFront;
- (id)init;
- (void)layoutSubviews;
- (id)contentDescription;
- (void)build;
- (void)setupLoadingUI:(id)arg1;
- (void)adjustToastPosition;
- (void)setupToastUI:(id)arg1 image:(id)arg2;
- (void)setupTextUI:(id)arg1;
- (void)setupHybridUI:(id)arg1 image:(id)arg2;
- (void)show;
- (void)delayHideWithSeqID:(id)arg1;
- (void)hide:(id /* block */)arg1 seqID:(long long)arg2;
- (long long)seqID;
- (void)setSeqID:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)dialogId;
- (void)setDialogId:(long long)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (double)fShowDuration;
- (void)setFShowDuration:(double)arg1;
- (BOOL)isMask;
- (void)setIsMask:(BOOL)arg1;
- (void).cxx_destruct;
@end
