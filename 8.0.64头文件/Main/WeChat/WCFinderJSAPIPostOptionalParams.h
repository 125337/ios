@interface WCFinderJSAPIPostOptionalParams : NSObject
{
    BOOL _presentAnimated; // +0x8
    BOOL _syncPostLoading; // +0x9
    BOOL _forbidSaveDraft; // +0xa
    WCFinderSearchEventRequestParams * _finderEventInfo; // +0x10
    NSString * _generalReportInfo; // +0x18
    NSString * _extParamsJsonString; // +0x20
    NSString * _mediaDescription; // +0x28
    NSString * _postBtnTitle; // +0x30
    WCFinderJumpInfo * _postJumpInfo; // +0x38
    NSString * _clientKVReportInfo; // +0x40
}
- (id)toJsonStr;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (BOOL)presentAnimated;
- (void)setPresentAnimated:(BOOL)arg1;
- (id)finderEventInfo;
- (void)setFinderEventInfo:(id)arg1;
- (id)generalReportInfo;
- (void)setGeneralReportInfo:(id)arg1;
- (id)extParamsJsonString;
- (void)setExtParamsJsonString:(id)arg1;
- (id)mediaDescription;
- (void)setMediaDescription:(id)arg1;
- (id)postBtnTitle;
- (void)setPostBtnTitle:(id)arg1;
- (id)postJumpInfo;
- (void)setPostJumpInfo:(id)arg1;
- (BOOL)syncPostLoading;
- (void)setSyncPostLoading:(BOOL)arg1;
- (BOOL)forbidSaveDraft;
- (void)setForbidSaveDraft:(BOOL)arg1;
- (id)clientKVReportInfo;
- (void)setClientKVReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
