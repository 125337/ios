@interface WCFileBrowserToolBarViewModel : NSObject
{
    NSMutableArray * _fileInfos; // +0x8
    NSArray * _allowFileExtensions; // +0x10
    id /* block */ _onDataChanged; // +0x18
    NSString * _sendButtonTitle; // +0x20
    unsigned long long _type; // +0x28
    NSMutableDictionary * _fileInfoDict; // +0x30
}
- (id)initWithType:(unsigned long long)arg1;
- (id)fileInfos;
- (id)fileInfosForDataType:(unsigned long long)arg1;
- (unsigned long long)dataTypeForFileInfo:(id)arg1;
- (int)addFile:(id)arg1 dataType:(unsigned long long)arg2;
- (void)removeFile:(id)arg1 dataType:(unsigned long long)arg2;
- (void)removeFile:(id)arg1 dataType:(unsigned long long)arg2 notify:(BOOL)arg3;
- (unsigned int)fileCountForDataType:(unsigned long long)arg1;
- (id)sendButtonTitle;
- (id)fileInfoSetForType:(unsigned long long)arg1;
- (void)setFileInfos:(id)arg1;
- (id)allowFileExtensions;
- (void)setAllowFileExtensions:(id)arg1;
- (id /* block */)onDataChanged;
- (void)setOnDataChanged:(id /* block */)arg1;
- (void)setSendButtonTitle:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)fileInfoDict;
- (void)setFileInfoDict:(id)arg1;
- (void).cxx_destruct;
@end
