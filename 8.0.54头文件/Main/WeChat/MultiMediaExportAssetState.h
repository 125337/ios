@interface MultiMediaExportAssetState : MultiMediaUploadBaseState
- (void)start;
- (id)getStateName;
- (BOOL)tryGenMiddleImage;
- (BOOL)tryConvertHevcVideo;
- (void)transformToNextState;
@end

