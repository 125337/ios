@interface MMVoIPToastAdapterParam : NSObject
{
    BOOL _forceWeToast; // +0x8
    BOOL _endEditing; // +0x9
    BOOL _isDiff; // +0xa
    BOOL _showAtMinimizeMode; // +0xb
    BOOL _needPlayPromptSound; // +0xc
    unsigned long long _toastType; // +0x10
    double _duration; // +0x18
    NSString * _text; // +0x20
}
- (id)init;
- (unsigned long long)toastType;
- (void)setToastType:(unsigned long long)arg1;
- (BOOL)forceWeToast;
- (void)setForceWeToast:(BOOL)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (BOOL)endEditing;
- (void)setEndEditing:(BOOL)arg1;
- (BOOL)isDiff;
- (void)setIsDiff:(BOOL)arg1;
- (BOOL)showAtMinimizeMode;
- (void)setShowAtMinimizeMode:(BOOL)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)needPlayPromptSound;
- (void)setNeedPlayPromptSound:(BOOL)arg1;
- (void).cxx_destruct;
@end
