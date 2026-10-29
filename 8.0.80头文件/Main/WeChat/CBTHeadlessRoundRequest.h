@interface CBTHeadlessRoundRequest : NSObject
{
    BOOL _hasCards; // +0x8
    int _enterScene; // +0xc
    int _presentPolicy; // +0x10
    int _inputType; // +0x14
    NSString * _businessId; // +0x18
    NSString * _reuseKey; // +0x20
    NSString * _textItem; // +0x28
    NSString * _bypassDetail; // +0x30
    NSString * _aiBypassInfoJson; // +0x38
    NSString * _reportParamsJson; // +0x40
    id /* block */ _presentFromVCProvider; // +0x48
}
+ (id)voiceRequestWithBusinessId:(id)arg1 reuseKey:(id)arg2 enterScene:(int)arg3;
+ (id)textRequestWithBusinessId:(id)arg1 reuseKey:(id)arg2 enterScene:(int)arg3 textItem:(id)arg4;
- (id)init;
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (id)reuseKey;
- (void)setReuseKey:(id)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (int)presentPolicy;
- (void)setPresentPolicy:(int)arg1;
- (int)inputType;
- (void)setInputType:(int)arg1;
- (id)textItem;
- (void)setTextItem:(id)arg1;
- (id)bypassDetail;
- (void)setBypassDetail:(id)arg1;
- (id)aiBypassInfoJson;
- (void)setAiBypassInfoJson:(id)arg1;
- (id)reportParamsJson;
- (void)setReportParamsJson:(id)arg1;
- (BOOL)hasCards;
- (void)setHasCards:(BOOL)arg1;
- (id /* block */)presentFromVCProvider;
- (void)setPresentFromVCProvider:(id /* block */)arg1;
- (void).cxx_destruct;
@end
