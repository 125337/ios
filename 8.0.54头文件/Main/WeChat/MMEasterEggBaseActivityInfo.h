@interface MMEasterEggBaseActivityInfo : NSObject <MMEasterEggActivityInfo>
{
    int _size; // +0x8
    NSString * _imageFilePath; // +0x10
    long long _animationType; // +0x18
    NSString * _appId; // +0x20
    NSArray * _frames; // +0x28
}
+ (id)activityNodeName;
- (Class)activityClass;
- (id)accessibilityLabel;
- (id)initWithActivityNode:(XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (void)tryParseAppIdFromActivityNode:(XmlReaderNode_t *)arg1;
- (void)tryParseEntryAnimTypeNodeFromActivityNode:(XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (BOOL)isValid;
- (BOOL)supportInteractiveImplicitView;
- (void)asyncPrepareInteractiveImplicitViewWithCompletionHandler:(id /* block */)arg1;
- (id)interactiveImplicitView;
- (void)asyncGetFramesWithCompletionHandler:(id /* block */)arg1;
- (id)generateInteractiveImplicitView:(id)arg1;
- (id)imageFilePath;
- (void)setImageFilePath:(id)arg1;
- (int)size;
- (void)setSize:(int)arg1;
- (long long)animationType;
- (void)setAnimationType:(long long)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)frames;
- (void)setFrames:(id)arg1;
- (void).cxx_destruct;
@end

