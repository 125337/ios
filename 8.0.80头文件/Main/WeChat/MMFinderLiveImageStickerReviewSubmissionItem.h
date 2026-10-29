@interface MMFinderLiveImageStickerReviewSubmissionItem : NSObject <MMFinderLiveStickerReviewSubmissionItem>
{
    NSString * _submissionId; // +0x8
    UIImage * _image; // +0x10
    NSString * _imageUri; // +0x18
}
- (id)initWithSubmissionId:(id)arg1;
- (BOOL)readyForSubmission;
- (void)prepareForSubmissionWithCompletionBlock:(id /* block */)arg1;
- (id)createSubmissionEntity;
- (id)submissionId;
- (void)setSubmissionId:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)imageUri;
- (void)setImageUri:(id)arg1;
- (void).cxx_destruct;
@end
