@interface TranslateSpeakReporter : NSObject
{
    unsigned long long _msgSvrID; // +0x8
    NSString * _chatUsername; // +0x10
    NSString * _translatedLanguage; // +0x18
    unsigned long long _speakStartTime; // +0x20
}
+ (id)paramsWithMsgWrap:(id)arg1 translatedLanguage:(id)arg2;
+ (void)reportReadAloudBtnExpose:(id)arg1 translatedLanguage:(id)arg2;
+ (void)reportReadAloudBtnClick:(id)arg1 translatedLanguage:(id)arg2;
+ (void)reportReadAloudStart:(id)arg1 translatedLanguage:(id)arg2;
+ (void)reportStopBtnExpose:(id)arg1 translatedLanguage:(id)arg2;
+ (void)reportStopBtnClick:(id)arg1 translatedLanguage:(id)arg2;
- (void)beginWithMsgWrap:(id)arg1 translatedLanguage:(id)arg2;
- (BOOL)hasSpeakStarted;
- (void)reportEndWithEndType:(long long)arg1;
- (void).cxx_destruct;
@end
