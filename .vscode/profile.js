const aboutBtn = document.getElementById('about-btn');
const skillsBtn = document.getElementById('skills-btn');
const contactBtn = document.getElementById('contact-btn');
const aboutSection = document.getElementById('about');
const skillsSection = document.getElementById('skills');
const contactSection = document.getElementById('contact');

aboutBtn.addEventListener('click', () => {
  aboutSection.classList.remove('hidden');
  skillsSection.classList.add('hidden');
  contactSection.classList.add('hidden');
});

skillsBtn.addEventListener('click', () => {
  aboutSection.classList.add('hidden');
  skillsSection.classList.remove('hidden');
  contactSection.classList.add('hidden');
});

contactBtn.addEventListener('click', () => {
  aboutSection.classList.add('hidden');
  skillsSection.classList.add('hidden');
  contactSection.classList.remove('hidden');
});