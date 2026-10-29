@interface WCFileBrowserToolBarViewModel : NSObject
{
    NSMutableArray * _fileInfos; // +0x8
    id /* block */ _onDataChanged; // +0x10
    unsigned long long _type; // +0x18
    NSMutableDictionary * _fileInfoDict; // +0x20
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
- (id /* block */)onDataChanged;
- (void)setOnDataChanged:(id /* block */)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)fileInfoDict;
- (void)setFileInfoDict:(id)arg1;
- (void).cxx_destruct;
@end

