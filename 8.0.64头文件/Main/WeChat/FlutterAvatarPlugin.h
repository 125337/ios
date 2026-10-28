@interface FlutterAvatarPlugin : NSObject <IHeadImageExt, MMFlutterPlugin, FlutterStreamHandler>
{
    FlutterEventChannel * _m_avatar_changed_event_channel; // +0x8
    id /* block */ _m_avatar_changed_event_sink; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (void)onHeadImageChange:(id)arg1;
- (id)m_avatar_changed_event_channel;
- (void)setM_avatar_changed_event_channel:(id)arg1;
- (id /* block */)m_avatar_changed_event_sink;
- (void)setM_avatar_changed_event_sink:(id /* block */)arg1;
- (void).cxx_destruct;
@end
