 '+name,'unhide',username));positionAuthorMenu(anchor)}
document.getElementById('author-dismiss')?.addEventListener('click',closeAuthorMenu);
query.addEventListener('input',()=>{columnForID.clear();if(searchPinned)revealSearchResults();render()});
window.addEventListener?.('resize',()=>{layoutCards();scheduleVisible()});
document.addEventListener('click',e=>{if(Date.now()<suppressTapUntil){e.preventDefault?.();return}const choice=e.target.closest('[data-author-action]');if(choice){closeAuthorMenu();send(choice.dataset.authorAction,choice.dataset.username);return}const author=e.target.closest('[data-follow]');if(author){openAuthorMenu(author.dataset.follow,author);return}const card=e.target.closest('[data-id]');if(card){const post=feedByID.get(card.dataset.id);send(e.target.closest('.visual')&&post?.hasMedia&&!post.video?'gallery':'detail',card.dataset.id);return}const action=e.target.closest('[data-action]');if(action){const menu=document.getElementById('menu');if(menu)menu.open=false;if(action.dataset.action==='hiddenFriends'){showHiddenFriends(action);return}closeAuthorMenu();send(action.dataset.action);return}const t=e.target.closest('[data-tab]');if(t)selectTab(t.dataset.tab)});
document.addEventListener('keydown',e=>{if(e.key==='Escape'){closeAuthorMenu();return}if(e.key==='Enter'&&!e.target.closest('[data-follow]')){const card=e.target.closest('[data-id]');if(card)send('detail',card.dataset.id)}});
document.addEventListener('dblclick',e=>e.preventDefault(),{passive:false});
</script>
</html>
