@interface AgentMagicBrushSnapshotReport : NSObject
{
    long long _containerId; // +0x8
    NSString * _snapshotFilePath; // +0x10
    long long _imageWidth; // +0x18
    long long _imageHeight; // +0x20
    NSString * _traceMsgId; // +0x28
    NSString * _msgId; // +0x30
}
+ (id)makeWithContainerId:(long long)arg1 snapshotFilePath:(id)arg2 imageWidth:(long long)arg3 imageHeight:(long long)arg4 traceMsgId:(id)arg5 msgId:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)containerId;
- (void)setContainerId:(long long)arg1;
- (id)snapshotFilePath;
- (void)setSnapshotFilePath:(id)arg1;
- (long long)imageWidth;
- (void)setImageWidth:(long long)arg1;
- (long long)imageHeight;
- (void)setImageHeight:(long long)arg1;
- (id)traceMsgId;
- (void)setTraceMsgId:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (void).cxx_destruct;
@end
