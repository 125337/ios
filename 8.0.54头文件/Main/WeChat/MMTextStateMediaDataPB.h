@interface MMTextStateMediaDataPB : MMObject <PBCoding>
{
    MMTextStateMediaUploadTaskInfo * _textStateMediaUploadTaskInfo; // +0x8
}
+ (void)PBArrayAdd_textStateMediaUploadTaskInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)textStateMediaUploadTaskInfo;
- (void)setTextStateMediaUploadTaskInfo:(id)arg1;
- (void).cxx_destruct;
@end

