@interface MJAsyncRequestQueueItem : NSObject
{
    BOOL _isCloneTimbre; // +0x8
    unsigned long long _type; // +0x10
    NSString * _roleID; // +0x18
    NSString * _audioID; // +0x20
    MJSpeechAudioData * _audioData; // +0x28
    NSString * _text; // +0x30
    NSArray * _captionItems; // +0x38
    id /* block */ _stsCompletionHandler; // +0x40
    id /* block */ _ttsCompletionHandler; // +0x48
    id /* block */ _ttsGroupCompletionHandler; // +0x50
    id /* block */ _sttGroupCompletionHandler; // +0x58
    id /* block */ _speechCloneGroupCompletionHandler; // +0x60
    struct _audioDuration; // +0x68
}
+ (id)stsItemWithAudioID:(id)arg1 roleID:(id)arg2 audioData:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)ttsItemWithText:(id)arg1 roleID:(id)arg2 isCloneTimbre:(BOOL)arg3 completionHandler:(id /* block */)arg4;
+ (id)ttsGroupItemWithAudioID:(id)arg1 roleID:(id)arg2 isCloneTimbre:(BOOL)arg3 captionItems:(id)arg4 audioDuration:(struct)arg5 completionHandler:(id /* block */)arg6;
+ (id)sttGroupItemWithAudioID:(id)arg1 audioData:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)speechCloneGroupItemWithAudioID:(id)arg1 audioData:(id)arg2 text:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithType:(unsigned long long)arg1 roleID:(id)arg2 audioID:(id)arg3 audioData:(id)arg4 text:(id)arg5 captionItems:(id)arg6 audioDuration:(struct)arg7 isCloneTimbre:(BOOL)arg8 stsCompletionHandler:(id /* block */)arg9 ttsCompletionHandler:(id /* block */)arg10 ttsGroupCompletionHandler:(id /* block */)arg11 sttGroupCompletionHandler:(id /* block */)arg12 speechCloneGroupCompletionHandler:(id /* block */)arg13;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)type;
- (id)roleID;
- (id)audioID;
- (id)audioData;
- (id)text;
- (id)captionItems;
- (struct)audioDuration;
- (BOOL)isCloneTimbre;
- (id /* block */)stsCompletionHandler;
- (id /* block */)ttsCompletionHandler;
- (id /* block */)ttsGroupCompletionHandler;
- (id /* block */)sttGroupCompletionHandler;
- (id /* block */)speechCloneGroupCompletionHandler;
- (void).cxx_destruct;
@end

