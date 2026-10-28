@interface MJCaptionReportVoiceInfo : NSObject
{
    MJCaptionReportRequestInfo * _requestInfo; // +0x8
    NSArray * _captionResult; // +0x10
}
- (id)init;
- (id)transResultFromCaptionResult;
- (id)toVoiceInfoPB;
- (id)description;
- (id)requestInfo;
- (void)setRequestInfo:(id)arg1;
- (id)captionResult;
- (void)setCaptionResult:(id)arg1;
- (void).cxx_destruct;
@end
