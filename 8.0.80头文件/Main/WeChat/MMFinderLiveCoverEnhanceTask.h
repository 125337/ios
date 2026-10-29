@interface MMFinderLiveCoverEnhanceTask : NSObject
{
    BOOL _failed; // +0x8
    BOOL _needEnhance; // +0x9
    int _scene; // +0xc
    int _initialRequestType; // +0x10
    id <MMFinderLiveCoverEnhanceTaskDelegate> _delegate; // +0x18
    unsigned long long _state; // +0x20
    NSString * _enhancedUrl; // +0x28
    NSString * _finderUsername; // +0x30
    NSString * _coverUrl; // +0x38
    NSString * _previousEnhanceTaskId; // +0x40
}
+ (id /* block */)tryGetCreateCoverEnhanceTaskBlockWithLiveTask:(id)arg1 scene:(int)arg2;
- (id)initWithFinderUsername:(id)arg1 coverUrl:(id)arg2 scene:(int)arg3;
- (void)startTaskWithCheckOnly:(BOOL)arg1;
- (void)cancelCurrentTask;
- (void)postEnhanceLiveCoverImageRequest;
- (void)handleEnhanceLiveCoverImageResult:(long long)arg1 enhancedCoverUrl:(id)arg2 previousEnhanceTaskId:(id)arg3 nextQueryIntervalMs:(long long)arg4;
- (void)handleEnhanceLiveCoverImageSucceedWithNeedEnhance:(BOOL)arg1 enhancedCoverUrl:(id)arg2;
- (void)handleEnhanceLiveCoverImageFailed;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (BOOL)failed;
- (void)setFailed:(BOOL)arg1;
- (BOOL)needEnhance;
- (void)setNeedEnhance:(BOOL)arg1;
- (id)enhancedUrl;
- (void)setEnhancedUrl:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (int)initialRequestType;
- (void)setInitialRequestType:(int)arg1;
- (id)previousEnhanceTaskId;
- (void)setPreviousEnhanceTaskId:(id)arg1;
- (void).cxx_destruct;
@end
