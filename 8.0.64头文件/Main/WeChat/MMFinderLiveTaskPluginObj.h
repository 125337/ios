@interface MMFinderLiveTaskPluginObj : NSObject
{
    MMFinderLiveAdvertisementVideoPlugin * _adVideo; // +0x8
    MMFinderLiveCommentPlugin * _comment; // +0x10
    MMFinderLiveConnectMicPlugin * _connectMic; // +0x18
    MMFinderLiveRealNameFriendLikeLogicPlugin * _friendLike; // +0x20
    MMFinderLiveTaskFPSMonitorPlugin * _fpsMonitor; // +0x28
    MMFinderLiveNoticeLogicPlugin * _notice; // +0x30
    MMFinderLiveStartGuideLogicPlugin * _liveStartGuide; // +0x38
    MMFinderLiveNextLiveNotificationLogicPlugin * _nextLiveNotification; // +0x40
    MMFinderLiveGuideAudienceApplyMicLogicPlugin * _audienceApplyMicGuide; // +0x48
    MMFinderLiveAllowRotateLogicPlugin * _allowRotate; // +0x50
    MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> * _liveTask; // +0x58
    NSMutableArray * _plugins; // +0x60
}
- (id)initWithLiveTask:(id)arg1;
- (void)registerPlugin:(unsigned long long)arg1;
- (void)notifyDataItemUpdated;
- (void)notifyExtFlagExtUpdated;
- (id)adVideo;
- (void)setAdVideo:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)connectMic;
- (void)setConnectMic:(id)arg1;
- (id)friendLike;
- (void)setFriendLike:(id)arg1;
- (id)fpsMonitor;
- (void)setFpsMonitor:(id)arg1;
- (id)notice;
- (void)setNotice:(id)arg1;
- (id)liveStartGuide;
- (void)setLiveStartGuide:(id)arg1;
- (id)nextLiveNotification;
- (void)setNextLiveNotification:(id)arg1;
- (id)audienceApplyMicGuide;
- (void)setAudienceApplyMicGuide:(id)arg1;
- (id)allowRotate;
- (void)setAllowRotate:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)plugins;
- (void)setPlugins:(id)arg1;
- (void).cxx_destruct;
@end
