@interface VoIPMPScreenProjectReportEvent : NSObject
{
    NSString * _sessionId; // +0x8
    NSString * _eventId; // +0x10
    NSString * _viewId; // +0x18
    NSNumber * _contentType; // +0x20
    NSNumber * _imageCount; // +0x28
    NSNumber * _videoCount; // +0x30
    NSNumber * _memberWindowScene; // +0x38
}
+ (id)makeWithSessionId:(id)arg1 eventId:(id)arg2 viewId:(id)arg3 contentType:(id)arg4 imageCount:(id)arg5 videoCount:(id)arg6 memberWindowScene:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)eventId;
- (void)setEventId:(id)arg1;
- (id)viewId;
- (void)setViewId:(id)arg1;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (id)imageCount;
- (void)setImageCount:(id)arg1;
- (id)videoCount;
- (void)setVideoCount:(id)arg1;
- (id)memberWindowScene;
- (void)setMemberWindowScene:(id)arg1;
- (void).cxx_destruct;
@end
