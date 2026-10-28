@interface MMFinderLiveTextStickerReviewSubmissionItem : NSObject <MMFinderLiveStickerReviewSubmissionItem>
{
    NSString * _submissionId; // +0x8
    NSString * _text; // +0x10
}
- (id)initWithSubmissionId:(id)arg1;
- (BOOL)readyForSubmission;
- (void)prepareForSubmissionWithCompletionBlock:(id /* block */)arg1;
- (id)createSubmissionEntity;
- (id)submissionId;
- (void)setSubmissionId:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void).cxx_destruct;
@end
