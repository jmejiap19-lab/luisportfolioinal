gsap.registerPlugin(TextPlugin, ScrollTrigger);

// ANIMACIÓN DE CARGA
gsap.to("#bienvenido", {
  opacity: 1,
  duration: 1.5,
  onComplete: () => {
    gsap.to("#progress", {
      width: "100%",
      duration: 1.5,
      onComplete: () => {
        gsap.to("#listo", { opacity: 1, y: -10, duration: 0.6 });
        // DESAPARECE LA PANTALLA DE CARGA
        setTimeout(() => {
          gsap.to("#loader", {
            opacity: 0,
            duration: 0.8,
            onComplete: () => {
              document.getElementById("loader").style.display = "none";
              initAnimations(); // INICIA LAS DEMÁS ANIMACIONES
            }
          });
        }, 600);
      }
    });
  }
});

// "Hola, soy Luis" letra por letra
gsap.to("#titulo", {
  text: "Hola, soy Luis",
  duration: 2,
  ease: "none",
  delay: 0.5
});

function initAnimations() {
  // Animaciones de entrada
  gsap.from("#profesion", { opacity: 0, x: -50, duration: 0.8, delay: 0.3 });
  gsap.from("#descripcion", { opacity: 0, y: 30, duration: 1, delay: 0.5 });
  gsap.from("#botones, #social", { opacity: 0, y: 20, duration: 0.8, delay: 0.7 });
  gsap.from("#ilustracion", { opacity: 0, scale: 0.9, duration: 1.2, ease: "back.out(1.7)", delay: 0.4 });

  // Scroll animations
  gsap.from("#img-acerca, #titulo-acerca, #nombre-acerca, #bio-acerca, #detalles-acerca > *", {
    scrollTrigger: { trigger: "#acerca", start: "top 70%" },
    y: 30, opacity: 0, stagger: 0.15, duration: 0.7
  });

  gsap.from("#titulo-proyectos", {
    scrollTrigger: { trigger: "#proyectos", start: "top 80%" },
    y: 50, opacity: 0, duration: 1
  });

  gsap.from(".project-card", {
    scrollTrigger: { trigger: "#proyectos", start: "top 70%" },
    y: 60, opacity: 0, stagger: 0.2, duration: 0.8, ease: "power2.out"
  });
}