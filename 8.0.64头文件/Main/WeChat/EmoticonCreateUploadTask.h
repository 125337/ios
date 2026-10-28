@interface EmoticonCreateUploadTask : EmoticonCustomCreateInternalTask
{
    id <EmoticonCreateUploadTaskDelegate> _delegate; // +0x8
    id /* block */ _appendInfoBlock; // +0x10
    id /* block */ _uploadFailBlock; // +0x18
    unsigned long long _totalEditCount; // +0x20
    EmoticonCustomManageAddLogic * _addEmoticonLogic; // +0x28
}
- (void)startUpload;
- (void)handleAddingItem:(id)arg1;
- (id)realDoAddImg:(id)arg1 item:(id)arg2;
- (id)addEmoticonLogic;
- (int)getUploadSceneFrom:(unsigned long long)arg1;
- (int)getAddEmoticonSourceFrom:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)appendInfoBlock;
- (void)setAppendInfoBlock:(id /* block */)arg1;
- (id /* block */)uploadFailBlock;
- (void)setUploadFailBlock:(id /* block */)arg1;
- (unsigned long long)totalEditCount;
- (void)setTotalEditCount:(unsigned long long)arg1;
- (void)setAddEmoticonLogic:(id)arg1;
- (void).cxx_destruct;
@end
