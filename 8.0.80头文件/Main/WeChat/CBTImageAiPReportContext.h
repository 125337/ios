@interface CBTImageAiPReportContext : NSObject <NSCopying>
{
    BOOL _subjectTypeResolved; // +0x8
    BOOL _xiaoweiDoubleWriteEnabled; // +0x9
    BOOL _bottomButtonVisible; // +0xa
    BOOL _bottomButtonExposureReported; // +0xb
    long long _messageId; // +0x10
    NSString * _chatUsername; // +0x18
    long long _viewerScene; // +0x20
    long long _subjectType; // +0x28
    long long _suggestionL1Type; // +0x30
    long long _suggestionL2Type; // +0x38
    long long _processEntry; // +0x40
    NSString * _xiaoweiSessionId; // +0x48
    NSArray * _xiaoweiSuggestionList; // +0x50
    unsigned long long _pendingBottomButtonClickCount; // +0x58
    NSMutableArray * _pendingSuggestionExposureParams; // +0x60
    NSMutableArray * _pendingSuggestionClickParams; // +0x68
    unsigned long long _pendingShareMenuExposureCount; // +0x70
    unsigned long long _pendingShareMenuClickCount; // +0x78
    NSMutableArray * _pendingLaunchSuccessParams; // +0x80
    NSString * _suggestionL1Text; // +0x88
    NSString * _suggestionL2Text; // +0x90
    NSString * _imageAiCdnUrl; // +0x98
    NSMutableArray * _pendingSuggestionExposureParams_patch; // +0xa0
    NSMutableArray * _pendingSuggestionClickParams_patch; // +0xa8
}
- (id)init;
- (id)generateXiaoweiSessionId;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)messageId;
- (void)setMessageId:(long long)arg1;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (long long)viewerScene;
- (void)setViewerScene:(long long)arg1;
- (BOOL)subjectTypeResolved;
- (void)setSubjectTypeResolved:(BOOL)arg1;
- (long long)subjectType;
- (void)setSubjectType:(long long)arg1;
- (long long)suggestionL1Type;
- (void)setSuggestionL1Type:(long long)arg1;
- (long long)suggestionL2Type;
- (void)setSuggestionL2Type:(long long)arg1;
- (long long)processEntry;
- (void)setProcessEntry:(long long)arg1;
- (id)xiaoweiSessionId;
- (void)setXiaoweiSessionId:(id)arg1;
- (id)xiaoweiSuggestionList;
- (void)setXiaoweiSuggestionList:(id)arg1;
- (BOOL)xiaoweiDoubleWriteEnabled;
- (void)setXiaoweiDoubleWriteEnabled:(BOOL)arg1;
- (BOOL)bottomButtonVisible;
- (void)setBottomButtonVisible:(BOOL)arg1;
- (BOOL)bottomButtonExposureReported;
- (void)setBottomButtonExposureReported:(BOOL)arg1;
- (unsigned long long)pendingBottomButtonClickCount;
- (void)setPendingBottomButtonClickCount:(unsigned long long)arg1;
- (id)pendingSuggestionExposureParams;
- (void)setPendingSuggestionExposureParams:(id)arg1;
- (id)pendingSuggestionClickParams;
- (void)setPendingSuggestionClickParams:(id)arg1;
- (unsigned long long)pendingShareMenuExposureCount;
- (void)setPendingShareMenuExposureCount:(unsigned long long)arg1;
- (unsigned long long)pendingShareMenuClickCount;
- (void)setPendingShareMenuClickCount:(unsigned long long)arg1;
- (id)pendingLaunchSuccessParams;
- (void)setPendingLaunchSuccessParams:(id)arg1;
- (id)suggestionL1Text;
- (void)setSuggestionL1Text:(id)arg1;
- (id)suggestionL2Text;
- (void)setSuggestionL2Text:(id)arg1;
- (id)imageAiCdnUrl;
- (void)setImageAiCdnUrl:(id)arg1;
- (id)pendingSuggestionExposureParams_patch;
- (void)setPendingSuggestionExposureParams_patch:(id)arg1;
- (id)pendingSuggestionClickParams_patch;
- (void)setPendingSuggestionClickParams_patch:(id)arg1;
- (void).cxx_destruct;
@end
