@interface MMPickLocationReporter : NSObject
{
    unsigned int _scene; // +0x8
    NSString * _sessionID; // +0x10
    NSString * _chatName; // +0x18
}
- (id)sessionID;
- (id)chatName;
- (void)report11554_Action:(unsigned int)arg1 userLocation:(CLLocationCoordinate2D)arg2 lastDragLocation:(CLLocationCoordinate2D)arg3 openID:(id)arg4;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setChatName:(id)arg1;
- (void).cxx_destruct;
@end
