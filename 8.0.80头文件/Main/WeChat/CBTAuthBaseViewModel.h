@interface CBTAuthBaseViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isDataFromNative; // +0x8
    NSDictionary * _cardData; // +0x10
    NSString * _cardId; // +0x18
    NSString * _cardName; // +0x20
    NSString * _style; // +0x28
    NSString * _iconUrl; // +0x30
    NSString * _rightIconUrl; // +0x38
    CBTAuthTarget * _rightIconTarget; // +0x40
    NSString * _title; // +0x48
    CBTAuthButton * _cancelButton; // +0x50
    CBTAuthButton * _confirmButton; // +0x58
    NSDictionary * _tails; // +0x60
    long long _displayState; // +0x68
    NSString * _currentTailKey; // +0x70
    NSString * _lastResultCode; // +0x78
    LiteAppStore * _currentAuthStore; // +0x80
    MMLiteAppViewController * _currentAuthLiteAppVC; // +0x88
}
- (id)initWithCardWrap:(id)arg1 delegate:(id)arg2;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (double)fixedTopHeightForWidth:(double)arg1;
- (double)maxCardHeightForWidth:(double)arg1;
- (double)contentHeightForWidth:(double)arg1 maxHeight:(double)arg2;
- (double)textHeight:(id)arg1 font:(id)arg2 width:(double)arg3 numberOfLines:(long long)arg4;
- (id)currentTail;
- (void)applyActionKey:(id)arg1 resultCode:(id)arg2;
- (id)getCellReuseId;
- (BOOL)isInteractive;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (BOOL)isDataFromNative;
- (void)setIsDataFromNative:(BOOL)arg1;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)cardName;
- (void)setCardName:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)rightIconUrl;
- (void)setRightIconUrl:(id)arg1;
- (id)rightIconTarget;
- (void)setRightIconTarget:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)tails;
- (void)setTails:(id)arg1;
- (long long)displayState;
- (void)setDisplayState:(long long)arg1;
- (id)currentTailKey;
- (void)setCurrentTailKey:(id)arg1;
- (id)lastResultCode;
- (void)setLastResultCode:(id)arg1;
- (id)currentAuthStore;
- (void)setCurrentAuthStore:(id)arg1;
- (id)currentAuthLiteAppVC;
- (void)setCurrentAuthLiteAppVC:(id)arg1;
- (void).cxx_destruct;
@end
