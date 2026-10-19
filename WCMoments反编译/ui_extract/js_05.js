 '+date.toLocaleTimeString('zh-CN',{hour:'2-digit',minute:'2-digit'}):date.toLocaleDateString('zh-CN',{month:'numeric',day:'numeric'})}
function createCard(p){
  const card=element('article','card');card.dataset.id=p.id;card.setAttribute('role','button');card.setAttribute('tabindex','0');
  const visual=element('div','visual'),photo=element('img','photo'),placeholder=element('div','placeholder'),badge=element('span','video-badge','