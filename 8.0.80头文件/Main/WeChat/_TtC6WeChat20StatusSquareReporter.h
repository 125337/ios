@interface _TtC6WeChat20StatusSquareReporter : NSObject
{
     sessionId; // +0x8
     sceneSessionId; // +0x18
     action; // +0x28
     scene; // +0x30
     iconId; // +0x38
     iconType; // +0x48
     iconDescription; // +0x50
     username; // +0x60
     userCount; // +0x70
     hasReddot; // +0x80
     isSameTopic; // +0x88
     duration; // +0x90
     topicClusterType; // +0x98
     topicInfos; // +0xa0
     actionResult; // +0xb0
     myStatusList; // +0xc0
}
- (id)initWithSessionId:(id)arg1 sceneSessionId:(id)arg2 scene:(long long)arg3;
- (id)init;
- (void).cxx_destruct;
@end
