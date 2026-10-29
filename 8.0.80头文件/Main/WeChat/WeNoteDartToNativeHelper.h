@interface WeNoteDartToNativeHelper : NSObject <WeNoteDartToNativeHelperBase>
{
    WeNoteDartToNativeHelperCallback * m_callback; // +0x8
    id /* block */ _noteOpenFormatProvider; // +0x10
}
- (void)setCallback:(id)arg1;
- (void)firstPaintFinishAsync:(unsigned long long)arg1 noteLocalId:(long long)arg2 initDuration:(long long)arg3 openNoteDuration:(long long)arg4 htmlDownloadDuration:(long long)arg5 htmlParseDuration:(long long)arg6 viewPaintDuration:(long long)arg7;
- (id /* block */)noteOpenFormatProvider;
- (void)setNoteOpenFormatProvider:(id /* block */)arg1;
- (void).cxx_destruct;
@end
