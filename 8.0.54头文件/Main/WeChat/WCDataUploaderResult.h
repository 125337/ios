@interface WCDataUploaderResult : NSObject
{
    long long _uploadRetcode; // +0x8
    long long _uploadErrType; // +0x10
    NSString * _uploadErrMsg; // +0x18
    NSArray * _uploadErrTogetherUsernames; // +0x20
    NSString * _uploadErrBtnUrl; // +0x28
    NSString * _uploadErrBtnTitle; // +0x30
    long long _uploadErrSnsTipsCode; // +0x38
}
- (id)description;
- (long long)uploadRetcode;
- (void)setUploadRetcode:(long long)arg1;
- (long long)uploadErrType;
- (void)setUploadErrType:(long long)arg1;
- (id)uploadErrMsg;
- (void)setUploadErrMsg:(id)arg1;
- (id)uploadErrTogetherUsernames;
- (void)setUploadErrTogetherUsernames:(id)arg1;
- (id)uploadErrBtnUrl;
- (void)setUploadErrBtnUrl:(id)arg1;
- (id)uploadErrBtnTitle;
- (void)setUploadErrBtnTitle:(id)arg1;
- (long long)uploadErrSnsTipsCode;
- (void)setUploadErrSnsTipsCode:(long long)arg1;
- (void).cxx_destruct;
@end

