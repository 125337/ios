@interface WCFileBrowserToolBarViewModel : NSObject
{
    BOOL _deleteAfterSend; // +0x8
    NSMutableArray * _fileInfos; // +0x10
    NSArray * _allowFileExtensions; // +0x18
    unsigned long long _singleFileSizeLimit; // +0x20
    id /* block */ _onDataChanged; // +0x28
    NSString * _sendButtonTitle; // +0x30
    unsigned long long _type; // +0x38
    NSMutableDictionary * _fileInfoDict; // +0x40
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
- (BOOL)shouldShowDeleteAfterSend;
- (id)largeFileReportInfos;
- (id)fileInfoSetForType:(unsigned long long)arg1;
- (unsigned long long)fileSizeLimit;
- (void)setFileInfos:(id)arg1;
- (id)allowFileExtensions;
- (void)setAllowFileExtensions:(id)arg1;
- (unsigned long long)singleFileSizeLimit;
- (void)setSingleFileSizeLimit:(unsigned long long)arg1;
- (BOOL)deleteAfterSend;
- (void)setDeleteAfterSend:(BOOL)arg1;
- (id /* block */)onDataChanged;
- (void)setOnDataChanged:(id /* block */)arg1;
- (void)setSendButtonTitle:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)fileInfoDict;
- (void)setFileInfoDict:(id)arg1;
- (void).cxx_destruct;
@end
